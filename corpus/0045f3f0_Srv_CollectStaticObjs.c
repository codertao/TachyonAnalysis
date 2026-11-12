
/* sweep */

int * Srv_CollectStaticObjs(int param_1,int *param_2,int *param_3,vec3 *param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = param_2 + 1;
    do {
      if ((*(byte *)(param_1 + 0xc3) & 3) == 3) {
        *param_2 = param_1;
        iVar1 = Ent_IsStaticVisible(param_1,piVar2);
        if (iVar1 == 0) {
          iVar1 = distance_between(param_4,(vec3 *)(param_1 + 0x34));
          *piVar2 = iVar1;
        }
        param_2 = param_2 + 2;
        *param_3 = *param_3 + 1;
        piVar2 = piVar2 + 2;
      }
      param_1 = *(int *)(param_1 + 8);
    } while (param_1 != 0);
    return param_2;
  }
  return param_2;
}

