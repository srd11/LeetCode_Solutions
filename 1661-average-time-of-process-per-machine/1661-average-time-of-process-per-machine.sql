# Write your MySQL query statement below

select a.machine_id,round(avg(a.timestamp - b.timestamp),3) as processing_time from activity as a inner join activity as b where a.machine_id = b.machine_id and a.process_id = b.process_id and a.timestamp > b.timestamp group by a.machine_id;