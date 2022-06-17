
-- Select employee_id from Employees where employee_id not in (select employee_id from Salaries) union all
-- Select employee_id from Salaries where employee_id not in (select employee_id from Employees)
-- order by employee_id
(Select employee_id from Employees
except
Select employee_id from Salaries)
union  
(Select employee_id from Salaries
except
Select employee_id from Employees)