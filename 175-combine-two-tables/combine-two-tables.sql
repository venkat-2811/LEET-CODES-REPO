# Write your MySQL query statement below
SELECT Person.firstName,Person.LastName,Address.city,Address.state
FROM Person
LEFT JOIN Address
ON Person.personId = Address.personId;