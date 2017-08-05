Program summ;
var
	A,sum,i : longint;
begin
sum:=0;
i:=1;
while (i<=100) do 
	begin
	readln(A);
	if (A>=1) and (A<=1000) then
	sum:=sum+A;
	i:=i+1;
	end;
writeln(sum);
end.