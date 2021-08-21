const int timer1_duration = 5;
const int timer2_duration = 10;

//If no parameter is given, seconds default to 3.
void sleepTimer(int seconds = 3){
  //seconds to milliseconds
  int ms = seconds * 1000;
  std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

//Creating timer1 - 5 second timer
void timer1(void){
  std::cout <<"Thread - "<<std::this_thread::get_id()<<" started on a "<< timer1_duration << "-second timer. \n";
  sleepTimer(timer1_duration);
  std::cout <<"Thread - "<<std::this_thread::get_id()<<" finished after a "<< timer1_duration << "-second duration. \n";
}

//Creating timer2 - 10 second timer
void timer2(void){
  std::cout <<"Thread - "<<std::this_thread::get_id()<<" started on a "<< timer2_duration << "-second timer. \n";
  sleepTimer(timer2_duration);
  std::cout <<"Thread - "<<std::this_thread::get_id()<<" finished after a "<< timer2_duration << "-second duration. \n";
}

//joiner function
void thread_joiner() {
  std::cout<< "\nJoining Threads\n";
  std::cout<< "----------------\n\n";
  
  std::cout << "Thread - "<<std::this_thread::get_id()<<" join started...\n";
  std::thread thread1(timer1); //New thread - run 5-sec timer
  std::thread thread2(timer2); //New thread - run 10-sec timer
  
  //joining threads
  thread1.join();
  thread2.join();
  
  //total Duration of joining threads
  sleepTimer(timer1_duration + timer2_duration);
  std::cout<< "Thread - "<<std::this_thread::get_id()<<" finished.\n";
}

//detacher function
void thread_detacher() {
  std::cout<< "\nDetaching Threads\n";
  std::cout<< "----------------\n\n";
    
  std::cout << "Thread - "<<std::this_thread::get_id()<<" detach started...\n";
  std::thread thread1(timer1); //New thread - run 5-sec timer
  std::thread thread2(timer2); //New thread - run 10-sec timer
  
  //detaching threads
  thread1.detach();
  thread2.detach();
  
  //total Duration of detaching threads
  sleepTimer(timer1_duration + timer2_duration);
  std::cout<< "Thread - "<<std::this_thread::get_id()<<" finished.\n";
}

void joinDetachThreads(void) {  
  thread_joiner();
  thread_detacher();

  /*Summary - 8A

  The functions under 8A - timer1() & timer2() use threads to allow eachother to run simultaneously, otherwise known as pipelining.
  Both of these function incorporate the use of global variables - also classed as constants as they remain the same throughout
  the program. These durations are used within each timer to assign the period of milliseconds each thread should be processed for.
  As each thread is being processed, the user is alerted of timer completion as well as the thread being 'finished' through an outputted string.
  

  Summary - 8B
  8B has required me to create additional functions including the thread_detacher() and thread_joiner(), each using the
  Global variables set - timer1_duration and timer2_duration for each of the threads using within the functions.

  The two 'join' statements used within the thread_joiner() function allow for both threads to be finished processing, before
  moving onto the next code block.

  Since the detacher separated the two threads into seperate partitions, it means the processing is done simultaneously, however it causes
  the problem of threads being completed before others. As a solution, combining the times of each of the threads using my time_sleep() function
  I am able to align the processing times of each thread to finish the time period by the end of both threads being complete.
  */
}