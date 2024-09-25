SELECT poi.pointOfInterestID, poi.name, poi.typeOfPOI
FROM PointOfInterest poi
LEFT JOIN ViewingInstructions vi ON poi.pointOfInterestID = vi.pointOfInterestID
LEFT JOIN Location loc ON vi.locationID = loc.locationID
LEFT JOIN Waypoint wp ON loc.locationID = wp.locationID
LEFT JOIN PlannedLocationSelection pls ON wp.routeID = pls.routeID
WHERE pls.planID IS NULL;
