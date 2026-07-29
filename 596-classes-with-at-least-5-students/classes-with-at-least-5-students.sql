# Write your MySQL query statement below
SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(*) >= 5;


-- Courses table:
-- +---------+----------+
-- | student | class    |
-- +---------+----------+
-- | A       | Math     |
-- | B       | English  |
-- | C       | Math     |
-- | D       | Biology  |
-- | E       | Math     |
-- | F       | Computer |
-- | G       | Math     |
-- | H       | Math     |
-- | I       | Math     |
-- +---------+----------+
-- MATHS - A,C,E,G,H,I
-- ENGLISH- B
-- BIOLOGY - D
-- COMPUTER-F