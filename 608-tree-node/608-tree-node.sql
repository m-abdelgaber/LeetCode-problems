/* Write your T-SQL query statement below */
select id, 'Root' as type
from Tree
where p_id is null

union all

select id, 'Inner' as type
from Tree
where id in (select p_id as id from Tree) and p_id is not null

union all

select id, 'Leaf' as type 
from Tree
where id not in (select p_id from Tree where p_id is not null) and p_id is not null