# Write your MySQL query statement below
select e.unique_id,i.name from Employees i left join EmployeeUNI e on
e.id=i.id ;