
/* refine: View_ProjectPoint, result <<7 */

void View_ProjectPointFixed(undefined4 param_1,int *param_2)

{
  View_ProjectPoint(param_2,param_1);
  *param_2 = *param_2 << 7;
  param_2[1] = param_2[1] << 7;
  return;
}

