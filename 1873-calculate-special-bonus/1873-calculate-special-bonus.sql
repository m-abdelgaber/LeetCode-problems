# Write your MySQL query statement below
Select employee_id, IF((name not Like 'M%') AND (MOD(employee_id,2)=1),salary,0) as bonus from Employees order by employee_id asc