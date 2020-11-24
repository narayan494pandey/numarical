import java.awt.*;
import java.applet.*;
public class AppletSum extends Applet
{
public void print(Graphies g)
{
int x=10;
int y=20;
String s="sum is :" +String.valueof(x+y);
g.drawString(s,10,30);
}
}
<html>
<body>
<applet code="AppletSum.class" width="300",height="200">
</applet>
</body>
</html>