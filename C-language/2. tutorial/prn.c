/*
C does not generate true random numbers, C generates pseudo-random numbers.

That means:-
Numbers lok random
But they are generted using a deterministic algorithm
Same starting point -> same sequence

This is intentional and extremely important in systems, simulations, and debugging.
*/ 
#include <stdio.h>
#include <stdlib.h> // to generate random numbers in C
#include <time.h>

int random_in_range(int max, int min){
  return min + rand() % (max - min + 1);
}

int rand_uniform(int N) {
  int r;
  long long limit = ((long long)RAND_MAX + 1) / N * N;

  do {
    r = rand();
  } while (r >= limit);

  return r % N;
}

int main() {

  /*
  rand() :-
  Returns a pseudo random integer
  Range: 0 to RAND_MAX
  */ 
  int x = rand();
  printf("%d\n", x);

  /*
  Above code will generate the same value everytime because we didn't change the seed.

  A seed is the starting value of the peeudo random algorithm.
  Think of it like:
  Start generating randomness form this number.

  srand() -> To set the seet
  This tells C: Start the random number generator from here.
  */ 
  srand(time(NULL));

  /*
  time(NULL) returns seconds since 1970
  Changes every second
  Different seed -> Different random sequence
  */ 
  int a = rand();
  printf("%d\n", a);
  // Now it will generate random number.

  printf("\n");
  for (int i = 0; i < 5; i++){
    printf("%d\n", rand());
  }
  // Now:- Every program runs -> different numbers

  int randnum = rand() % 2;
  // Generate random number between 0 and N-1
  // In this case (0 and 1)
  printf("%d\n", randnum);

  int b = random_in_range(20, 10);
  printf("%d\n", b);

  /*
  When you write:
  rand() % 10
  You are saying:
  “Give me a random number… then keep only the remainder after dividing by 10.”
  So the only possible answers are:
  0 1 2 3 4 5 6 7 8 9

  Now imagine this story (THIS is the key)
  You have 10 students
  They are numbered:
  0 1 2 3 4 5 6 7 8 9
  Now suppose the teacher has 23 candies and distributes them one by one, in order:

  0,1,2,3,4,5,6,7,8,9,
  0,1,2,3,4,5,6,7,8,9,
  0,1,2
  Now count candies:
  ⚠️ Students 0,1,2 got extra candy.
  This is bias.

  🔥 How this maps to C (rand())

  rand() gives numbers from 0 to RAND_MAX

  Let’s pretend:
  RAND_MAX = 22
  (so total numbers = 23) 
  Now you do:
  rand() % 10

  This is exactly the candy situation above.
  Total numbers = 23
  Buckets = 10
  23 is NOT divisible by 10

  So:
  Some results appear more often
  Others appear less often
  That unfairness is called modulo bias.

  ❓ Why don’t we notice this in games?

  Because:
  The difference is tiny
  Human brains are bad at noticing probability
  Games don’t need perfect fairness

  So rand() % N is OK for:
  learning
  simple games
  fun experiments

  ❌ Why it’s bad for security

  Because:
  Attackers do notice tiny biases
  Bias means predictability
  Predictability breaks security

  That’s why cryptography demands perfectly uniform randomness.

  🛠️ Now the FIX — still beginner friendly
  Big idea of the fix (one sentence)
  If some random numbers would cause unfairness, we simply throw them away and try again.

  That’s it. No magic.

  🎒 Candy story — fixed version

  Teacher says:
  “I will only distribute candies in groups of 20 (because 20 divides evenly among 10 students).
  If I have extra candies, I throw them away.”
  So:
  Use first 20 candies
  Throw away the last 3
  Now each student gets exactly 2 candies.

  Perfect fairness 🎯

  🧠 Same idea in C (no code yet)

  Generate a random number

  Check:
  “Does this number fit evenly?”
  If YES → use it
  If NO → ignore it and generate another
  We are rejecting bad values.

  This is why the fix is called:
  Rejection sampling
  */ 

  printf("Random number generated without modulo bias is: %d\n", rand_uniform(10));

  return 0;
}
