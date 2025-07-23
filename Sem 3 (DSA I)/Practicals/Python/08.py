#  Write a program to create a student table with attributes, roll_no and name. Insert the records in the table and display them. Update the records with roll_no = 10 from the table.Write a program to create an employee table with attributes, no and name. Insert 5 records in the table and display them. Update the records with no = 103 from the table.

import psycopg2

conn = psycopg2.connect(
    database="practical",
    user="postgres",
    password="12345",
    port=5432,
    host="localhost"
)

cur = conn.cursor()

cur.execute('''
CREATE TABLE IF NOT EXISTS student (
    roll_no INTEGER PRIMARY KEY,
    name VARCHAR
);
''')

cur.execute("INSERT INTO student (roll_no, name) VALUES (1, 'Alice') ON CONFLICT DO NOTHING;")
cur.execute("INSERT INTO student (roll_no, name) VALUES (2, 'Bob') ON CONFLICT DO NOTHING;")
cur.execute("INSERT INTO student (roll_no, name) VALUES (10, 'Charlie') ON CONFLICT DO NOTHING;")

# print("Students Table:")
# cur.execute("SELECT * FROM student;")
# students = cur.fetchall()
# for student in students:
#     print(student)

cur.execute("UPDATE student SET name = 'Updated_Charlie' WHERE roll_no = 10;")
# print("\nUpdated Students Table:")
# cur.execute("SELECT * FROM student;")
# students = cur.fetchall()
# for student in students:
#     print(student)

cur.execute('''
CREATE TABLE IF NOT EXISTS employee (
    no INTEGER PRIMARY KEY,
    name VARCHAR
);
''')

cur.execute("INSERT INTO employee (no, name) VALUES (101, 'John') ON CONFLICT DO NOTHING;")
cur.execute("INSERT INTO employee (no, name) VALUES (102, 'Jane') ON CONFLICT DO NOTHING;")
cur.execute("INSERT INTO employee (no, name) VALUES (103, 'Smith') ON CONFLICT DO NOTHING;")
cur.execute("INSERT INTO employee (no, name) VALUES (104, 'Anna') ON CONFLICT DO NOTHING;")
cur.execute("INSERT INTO employee (no, name) VALUES (105, 'Mike') ON CONFLICT DO NOTHING;")


# print("\nEmployees Table:")
# cur.execute("SELECT * FROM employee;")
# employees = cur.fetchall()
# for employee in employees:
#     print(employee)

cur.execute("UPDATE employee SET name = 'Updated_Smith' WHERE no = 103;")
# print("\nUpdated Employees Table:")
# cur.execute("SELECT * FROM employee;")
# employees = cur.fetchall()
# for employee in employees:
#     print(employee)


conn.commit()
cur.close()
conn.close()
