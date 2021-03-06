//Identify Smith Numbers
//Author : Roland Hartanto

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
//typedef map<int, int> mii;

ll _sieve_size;
bitset<10000010> bs;   // 10^7 should be enough for most cases
vi primes;   // compact list of primes in form of vector<int>

ll sumOfDigit(ll num){
	ll sum=0;
	while(num!=0){
		sum+=(num%10);
		num/=10;
	}
	return sum;
}

void sieve(ll upperbound) {          // create list of primes in [0..upperbound]
  _sieve_size = upperbound + 1;                   // add 1 to include upperbound
  bs.set();                                                 // set all bits to 1
  bs[0] = bs[1] = 0;                                     // except index 0 and 1
  for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
    // cross out multiples of i starting from i * i!
    for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
    primes.push_back(i);  // also add this vector containing list of primes
} }                                           // call this method in main method

bool isPrime(ll N) {                 // a good enough deterministic prime tester
  if (N <= _sieve_size) return bs[N];                   // O(1) for small primes
  for (int i = 0; i < (int)primes.size(); i++)
    if (N % primes[i] == 0) return false;
  return true;                    // it takes longer time if N is a large prime!
}                      // note: only work for N <= (last prime in vi "primes")^2

vi primeFactors(ll N) {   // remember: vi is vector of integers, ll is long long
  vi factors;                    // vi `primes' (generated by sieve) is optional
  ll PF_idx = 0, PF = primes[PF_idx];     // using PF = 2, 3, 4, ..., is also ok
  while (N != 1 && (PF * PF <= N)) {   // stop at sqrt(N), but N can get smaller
    while (N % PF == 0) { N /= PF; factors.push_back(PF); }    // remove this PF
    PF = primes[++PF_idx];                              // only consider primes!
  }
  if (N != 1) factors.push_back(N);     // special case if N is actually a prime
  return factors;         // if pf exceeds 32-bit integer, you have to change vi
}

ll sumPF(ll N) { //modified (according to problem spec) with sum of digits
  ll PF_idx = 0, PF = primes[PF_idx], ans = 0;
  while (N != 1 && (PF * PF <= N)) {
    while (N % PF == 0) { N /= PF; ans += sumOfDigit(PF); }
    PF = primes[++PF_idx];
  }
  if (N != 1) ans += sumOfDigit(N);
  return ans;
}

pair<ll,ll> pairDivisor(ll num){
	pair<ll,ll> ans;
	for(int i=(int)sqrt(num);i>=1;i--){
		if(num%i == 0){
			ans.first = i;
			ans.second = num/i;
			break;
		}
	}
    return ans;
}

int main(){
	sieve(10000000);
	ll n;
	scanf("%lld",&n);
	ll a = sumOfDigit(n);
	pair<ll,ll> divisor = pairDivisor(n);
	ll b = sumPF(divisor.first) + sumPF(divisor.second);
	//cout << b;
	//cout << divisor.first << " " << divisor.second <<endl;
	printf("%d\n",(a==b));
	return 0;
}
