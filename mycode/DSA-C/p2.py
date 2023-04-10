#CONNECTING OF DATABASE...
#AND CREATING A TABLE NAMED STUDENT
import sqlite3

cnt = sqlite3.connect("backup.dp")

cnt.execute('''CREATE TABLE Students( NAME TEXT,COURSE TEXT, CGPA REAL);''')

#Insertion of records in the table
cnt.execute('''INSERT INTO Students VALUES('Man','Quantum Physics',90.5);''')
cnt.execute('''INSERT INTO Students VALUES('Pavan','BioTech',98.8);''')
cnt.execute('''INSERT INTO Students VALUES('jeevan','PYTHON',90.5);''')
cnt.execute('''INSERT INTO Students VALUES('Sakshi','DFS',91.8);''')

# commit changes to the database cnt.commit()

print('Records in a Table')
cursor = cnt.execute('''SELECT * FROM Students;''')
for i in cursor:
    print(i[0]+" "+str(i[1])+" "+str(i[2]))