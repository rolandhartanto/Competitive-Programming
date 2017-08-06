Program ife;
var 
	N, a :real;
begin
readln(N);
a:=N-trunc(N);
if (N>0) and (a>0) then
	begin
	writeln(trunc(N),' ',(trunc(N)+1));
	end
else if (N<0) and(a<0) then
	begin
	writeln(trunc(N)-1,' ',trunc(N));
	end
else
	begin
	writeln(trunc(N),' ',trunc(N));
	end;
end.