
/* sweep */

int AiDebug_DrawGroup(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  bVar1 = *(byte *)(*DAT_005b2770 + 4);
  if (*(int *)(param_2 + 0x24) == 0) {
    return param_3;
  }
  iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 8);
  if (iVar2 == param_1) {
    str_sprintf(local_100,s_FLIGHT_GROUP_LEADER_0054a3c4);
    uVar3 = 0xffff00;
  }
  else {
    if (iVar2 == 0) {
      return param_3;
    }
    Ent_GetDescName50(iVar2,local_80);
    str_sprintf(local_100,s_GROUP_LEADER___s_0054a3b0,local_80);
    uVar3 = 0xff8000;
  }
  param_3 = param_3 + (uint)bVar1;
  Text_DrawAligned(local_100,DAT_005b2770,0x1c,param_3,uVar3,0xffff,0x10000,2);
  return param_3;
}

