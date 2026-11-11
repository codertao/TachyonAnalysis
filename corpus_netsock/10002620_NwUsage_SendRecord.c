
/* 0x34-byte per-player usage record to the usage server */

void __cdecl NwUsage_SendRecord(undefined4 *param_1,int param_2)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  undefined4 local_4;
  
  puVar3 = local_34;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_34[0] = *param_1;
  local_34[1] = param_1[1];
  local_34[2] = param_1[2];
  local_20 = *(undefined2 *)(param_1 + 4);
  local_34[3] = param_1[3];
  local_24 = param_1[6];
  local_1e = *(undefined2 *)(param_1 + 5);
  local_18 = param_1[8];
  local_1c = DAT_10019c70._2_2_;
  local_14 = param_1[9];
  local_10 = param_1[10];
  local_6 = *(undefined2 *)((int)param_1 + 0x32);
  local_c = param_1[0xb];
  local_8 = *(undefined2 *)(param_1 + 0xc);
  local_4 = param_1[0xd];
  local_1a = *(undefined2 *)((int)param_1 + 0x46);
  if (DAT_10007060 != 0) {
    ns_SendTo((char *)local_34,0x34,DAT_10007060,DAT_10007064);
  }
  DVar1 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x3e) = DVar1;
  if (param_2 != 0) {
    *(int *)((int)param_1 + 0x42) = *(int *)((int)param_1 + 0x42) + 1;
    return;
  }
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  return;
}

