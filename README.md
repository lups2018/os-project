# os-project
os assingment
Ques. 23. Two types of people can enter into a library- students and teachers. After entering the
library, the visitor searches for the required books and gets them. In order to get them issued, he
goes to the single CPU which is there to process the issuing of books. Two types of queues are
there at the counter-one for students and one for teachers. A student goes and stands at the tail of
the queue for students and similarly the teacher goes and stands at the tail of the queue for
teachers (FIFO). If a student is being serviced and a teacher arrives at the counter, he would be
the next person to get service (PRIORITY-non preemptive). If two teachers arrive at the same
time, they will stand in their queue to get service (FIFO). WAP to ensure that the system works
in a non-chaotic manner.
If a teacher is being served and during the period when he is being served, another teacher
comes, then that teacher would get the service next. This process might continue leading to
increase in waiting time of students. Ensure in your program that the waiting time of students is
minimized.
Test Cases:
1-Teacher will be processed first.
2-Priority will be given to teacher.
3-Both the teacher and the student must get the FIFO service.
4-If a teacher is in process and a new teacher comes then he will be processe next not the student.
5-Both teacher and student must go and stand at the tail of th queue.
