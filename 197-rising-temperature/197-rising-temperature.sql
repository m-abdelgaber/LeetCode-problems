/* Write your T-SQL query statement below */
-- SELECT DATEADD(day, -1, CAST(GETDATE() AS date)) AS YesterdayDate;
select w2.id
from Weather w1 inner join Weather w2 on w1.recordDate = DATEADD(day, -1, CAST(w2.recordDate AS date))
where w1.temperature < w2.temperature