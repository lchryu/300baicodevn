import random
import os

# Tạo các thư mục input và output nếu chưa tồn tại
os.makedirs('input', exist_ok=True)
os.makedirs('output', exist_ok=True)

# Hàm DFS để duyệt đồ thị
def DFS(adj_list, visited, node):
    visited[node] = True
    for neighbor in adj_list[node]:
        if not visited[neighbor]:
            DFS(adj_list, visited, neighbor)

# Kiểm tra số thành phần liên thông sau khi bỏ 1 đỉnh
def count_connected(adj_list, n, cnt):
    visited = [False] * (n + 1)
    count = 0
    for i in range(1, n + 1):
        if not visited[i]:
            DFS(adj_list, visited, i)
            count += 1
    return count > cnt

# Hàm sinh ngẫu nhiên test case
def generate_test_case(test_number):
    n = random.randint(2, 100)  # Số lượng đỉnh từ 2 đến 100
    m = random.randint(1, min(100, n * (n - 1) // 2))  # Số lượng cạnh ngẫu nhiên từ 1 đến min(100, n*(n-1)/2)

    edges = set()
    while len(edges) < m:
        u = random.randint(1, n)
        v = random.randint(1, n)
        if u != v:
            edges.add((min(u, v), max(u, v)))

    # Tạo danh sách kề từ các cạnh
    adj_list = [[] for _ in range(n + 1)]
    for u, v in edges:
        adj_list[u].append(v)
        adj_list[v].append(u)

    # Tính số thành phần liên thông ban đầu
    visited = [False] * (n + 1)
    initial_count = 0
    for i in range(1, n + 1):
        if not visited[i]:
            DFS(adj_list, visited, i)
            initial_count += 1

    # Đếm số đỉnh trụ
    ans = 0
    for i in range(1, n + 1):
        visited = [False] * (n + 1)
        visited[i] = True
        if count_connected(adj_list, n, initial_count):
            ans += 1

    # Ghi dữ liệu đầu vào vào file input/inputXXX.txt
    input_filename = f'input/input{test_number:03}.txt'
    with open(input_filename, 'w') as input_file:
        input_file.write(f"{n} {m}\n")
        for u, v in edges:
            input_file.write(f"{u} {v}\n")

    # Ghi kết quả mong đợi vào file output/outputXXX.txt
    output_filename = f'output/output{test_number:03}.txt'
    with open(output_filename, 'w') as output_file:
        output_file.write(f"{ans}\n")

# Sinh 50 test case
for i in range(2):
    os.system('cls' if os.name == 'nt' else 'clear')  # Xóa màn hình console nếu đang ở Windows
    generate_test_case(i)

print("50 test cases have been generated in input/ and output/ folders.")
