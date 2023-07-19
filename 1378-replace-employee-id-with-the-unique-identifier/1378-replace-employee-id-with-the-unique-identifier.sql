# Write your MySQL query statement below
select u.unique_id,e.name from EmployeeUNI as u right join employees as e using(id);