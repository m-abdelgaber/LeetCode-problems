/* Write your T-SQL query statement below */
Select user_id, replace(name, name, concat(upper(substring(name,1,1)),lower(substring(name,2,10)))) as name 
from Users
order by user_id asc