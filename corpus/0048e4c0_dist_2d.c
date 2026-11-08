
int dist_2d(int x1,int y1,int x2,int y2)

{
  undefined4 local_8;
  
  local_8 = (int)(longlong)
                 ROUND(SQRT((float10)(x1 - x2) * (float10)(x1 - x2) +
                            (float10)(y1 - y2) * (float10)(y1 - y2)));
  return local_8;
}

