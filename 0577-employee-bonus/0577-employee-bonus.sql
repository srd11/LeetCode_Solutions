# Write your MySQL query statement below
# select e.name,b.bonus from employee as e left join bonus as b using(empid) where (b.bonus < 1000);


SELECT name, bonus
FROM Employee LEFT JOIN Bonus USING(empId)
WHERE COALESCE(bonus, 0) < 1000; 