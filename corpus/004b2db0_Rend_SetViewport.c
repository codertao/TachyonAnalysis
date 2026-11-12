
/* refine: View_SetRect then Frustum_SetPlanes(view planes, 4) */

void Rend_SetViewport(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  View_SetRect(&DAT_006b0820,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  Frustum_SetPlanes(&DAT_006b0858,4,0);
  return;
}

