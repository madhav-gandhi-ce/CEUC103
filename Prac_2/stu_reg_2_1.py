# Practical 2.1
# To take input and print Studnet Information
# Last updated on 15th August, 2026 at 17:42.

print("************************************************")
print("     STUDENT RECORD MANAGEMENT SYSTEM")
print("************************************************")

print("")

id = input("Enter Enrollment ID : ")
name = input("Enter Your Name : ")
branch = input("Enter Branch Name : ")
sem_num = input("Enter Semester : ")
num = input("Enter Contact No. : ")

print("")

print("------------------------------------------")
print("     STUDENT INFORMATION")
print("------------------------------------------")

print("")
print(f"{'Enrollment ID':<20}: {id}")
print(f"{'Name':<20}: {name}")
print(f"{'Branch':<20}: {branch}")
print(f"{'Semester':<20}: {sem_num}")
print(f"{'Contact No.':<20}: {num}")
