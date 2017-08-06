Program duapangkat;
var
	N, a : longint;
begin
readln(N);
a:=N;
while ((a mod 2)=0) do 
	begin
	a:=a div 2;
	end;
if a=1 then
	begin
	writeln('ya');
	end
else
	begin
	writeln('bukan');
	end;
end.