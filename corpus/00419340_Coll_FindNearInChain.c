
/* sweep */

undefined4 Coll_FindNearInChain(int param_1,vec3 *param_2,uint param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (((param_1 != DAT_005b2d80) &&
        (uVar1 = distance_between((vec3 *)(param_1 + 0x34),param_2), uVar1 <= param_3)) &&
       (iVar2 = (*param_4)(DAT_005b2d80,param_1), iVar2 != 0)) break;
    param_1 = *(int *)(param_1 + 0x9c);
  }
  return 1;
}

