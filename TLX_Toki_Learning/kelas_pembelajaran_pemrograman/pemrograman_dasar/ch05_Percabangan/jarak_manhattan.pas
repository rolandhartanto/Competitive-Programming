Program Jarakmanhattan;
var
	x1, x2, y1, y2, jarak : longint;
begin
	readln(x1,y1,x2,y2);
	jarak := abs(x1-x2) + abs(y1-y2);
	writeln(jarak);
end.