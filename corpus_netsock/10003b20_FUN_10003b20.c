
void __cdecl
FUN_10003b20(undefined4 *param_1,uint param_2,undefined4 *param_3,int param_4,int param_5,
            int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = param_3[4];
  while (iVar1 != 0) {
    Sleep(0);
    iVar1 = param_3[4];
  }
  param_3[4] = 1;
  if (param_2 == 0) {
    param_3[4] = 0;
    return;
  }
  if ((param_6 == 1) && (0x7ff < (int)param_3[3])) {
    param_3[4] = 0;
    return;
  }
  if (0xff5 < (int)param_3[3]) {
    FUN_10003aa0(s_QUE_FULL_1000711c,param_3[3]);
    param_3[4] = 0;
    return;
  }
  puVar2 = (undefined4 *)param_3[2];
  puVar2[2] = param_4;
  puVar2[1] = param_2;
  puVar2[3] = param_5;
  if ((void *)*puVar2 != (void *)0x0) {
    free((void *)*puVar2);
  }
  puVar3 = malloc(param_2);
  *puVar2 = puVar3;
  for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  puVar3 = puVar2 + 4;
  if ((undefined4 *)*param_3 + 0x4000 <= puVar2 + 4) {
    puVar3 = (undefined4 *)*param_3;
  }
  param_3[2] = puVar3;
  param_3[3] = param_3[3] + 1;
  param_3[4] = 0;
  return;
}

