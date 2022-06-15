# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
# Delete From Person 
# Where id in
# ((select p1.id from Person p1 inner join Person p2  On p1.email = p2.email where p1.id <p2.id) as c)

Delete From Person
Where id Not In (
    Select Min(c.id) 
    From (Select * From Person) as c
    Group by email
);