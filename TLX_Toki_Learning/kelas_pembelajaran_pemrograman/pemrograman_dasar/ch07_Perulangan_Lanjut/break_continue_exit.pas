Program bre;
var
	N, i : integer;
begin
readln(N);
for i:=1 to N do 
	begin
		if (i mod 10)=0 then 
			begin
			continue;
			end;
		if i=42 then
			begin
			writeln('ERROR');
			break;
			end;
		writeln(i);
	end;
end.