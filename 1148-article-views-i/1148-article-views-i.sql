# Write your MySQL query statement below
# select author_id as id from views where author_id = viewer_id order by id;
select distinct author_id as id from views where author_id = viewer_id order by id;