Program ministat;
var
	N,i : integer;
	B, max, min : longint;
begin
readln(N);
read(B);
max:=B;
min:=B;
for i:=2 to N do 
begin
	read(B);
	if B>max then
		begin
		max:=B;
		end;
	if B<min then
		begin
		min:=B;
		end;
end;
writeln(max,' ',min);
end.