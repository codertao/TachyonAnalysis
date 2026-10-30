
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040edd0(int *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  undefined1 *puVar3;
  float fVar4;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  puVar3 = local_18;
  FUN_004b1bb0(puVar3,param_2);
  fVar4 = (float)*param_1 * _DAT_0052e5d8;
  local_24 = 0x10000;
  local_2c = 0x10000;
  local_34 = 0x10000;
  fVar1 = (float)param_1[1] * _DAT_0052e5d8;
  local_20 = 0;
  local_1c = 0;
  fVar2 = (float)param_1[2] * _DAT_0052e5d8;
  local_30 = 0;
  local_28 = 0;
  local_3c = 0;
  local_38 = 0;
  FUN_004b24d0(&local_24,&local_24,puVar3,param_2,fVar4);
  FUN_004b24d0(&local_30,&local_30);
  FUN_004b24d0(&local_3c,&local_3c);
  FUN_004b9a50(((float)local_24 * fVar4 + (float)local_20 * fVar1 + (float)local_1c * fVar2) *
               _DAT_0052e5d4,
               ((float)local_30 * fVar4 + (float)local_2c * fVar1 + (float)local_28 * fVar2) *
               _DAT_0052e5d4,
               ((float)local_3c * fVar4 + (float)local_38 * fVar1 + (float)local_34 * fVar2) *
               _DAT_0052e5d4);
  return;
}

