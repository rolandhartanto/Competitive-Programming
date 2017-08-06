Program kandang;
var
	i, N, B, sum : longint;
begin
readln(N);
sum:=0;
for i:=1 to N do 
	begin
	read(B);
	sum:=sum+B;
	end;
writeln(sum);
end.