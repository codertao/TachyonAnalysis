
/* server pool only; +0xc3 = 0 (replicated by snapshot); hp +0xbc = 1, +0x80 Missile_OnDamage;
   launch phase from 0x55a51c[def+0x84] then def+0x64 */

int Proj_CreateMissile(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = (undefined1 *)*param_1;
  iVar4 = FUN_0041b790(&g_PoolCommon,3,*(undefined4 *)(param_1[1] + 100));
  if (iVar4 == 0) {
    return 0;
  }
  FUN_0041b8b0(iVar4);
  iVar2 = *(int *)(puVar1 + 0x84);
  *(undefined4 *)(iVar4 + 0x114) = 0;
  *(undefined2 *)(iVar4 + 0x74) = 2;
  *(undefined4 *)(iVar4 + 0x58) = **(undefined4 **)(puVar1 + 0x74);
  *(undefined1 *)(iVar4 + 0x7e) = *(undefined1 *)(*(int *)(puVar1 + 0x74) + 4);
  *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(puVar1 + 0x94);
  *(undefined4 *)(iVar4 + 0x5c) = *(undefined4 *)(puVar1 + 0x90);
  puVar3 = (undefined4 *)param_1[2];
  *(undefined4 *)(iVar4 + 0x34) = *puVar3;
  *(undefined4 *)(iVar4 + 0x38) = puVar3[1];
  *(undefined4 *)(iVar4 + 0x3c) = puVar3[2];
  puVar3 = (undefined4 *)param_1[3];
  *(undefined4 *)(iVar4 + 0x4c) = *puVar3;
  *(undefined4 *)(iVar4 + 0x50) = puVar3[1];
  *(undefined4 *)(iVar4 + 0x54) = puVar3[2];
  *(code **)(iVar4 + 0x68) = Proj_ThinkMissileLaunch;
  *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(puVar1 + 0x78);
  *(undefined2 *)(iVar4 + 0x30) = 0;
  *(code **)(iVar4 + 0x80) = Missile_OnDamage;
  *(undefined4 *)(iVar4 + 0xbc) = 1;
  if (*(int *)(puVar1 + 0xe8) == 0) {
    *(code **)(iVar4 + 0x6c) = Proj_PostThinkOwned;
  }
  else {
    *(int *)(iVar4 + 0x6c) = *(int *)(puVar1 + 0xe8);
  }
  *(undefined1 *)(iVar4 + 0xc3) = 0;
  *(undefined4 *)(iVar4 + 0x8c) = DAT_00565798;
  *(undefined1 *)(iVar4 + 0xc0) = 6;
  *(undefined1 *)(iVar4 + 0xc1) = *puVar1;
  *(undefined4 *)(iVar4 + 0x90) = param_1[7];
  if (param_1[7] != 0) {
    FUN_00493910(param_1[7],1);
  }
  *(int *)(iVar4 + 0xd0) = DAT_00565460;
  DAT_00565460 = DAT_00565460 + 1;
  if (param_1[1] != 0) {
    *(undefined1 *)(iVar4 + 0xc2) = *(undefined1 *)(param_1[1] + 0xc2);
  }
  *(undefined1 **)(iVar4 + 0xdc) = puVar1;
  *(undefined4 *)(iVar4 + 0xd4) = *(undefined4 *)(&DAT_0055a51c + iVar2 * 8);
  *(undefined4 *)(iVar4 + 200) = param_1[1];
  *(undefined4 *)(iVar4 + 0xec) = 0;
  *(undefined4 *)(iVar4 + 0xf0) = param_1[9];
  *(undefined1 **)(iVar4 + 0x118) = &LAB_00494350;
  *(undefined4 *)(iVar4 + 0xd8) = 0;
  if ((puVar1[0xd8] & 2) == 0) {
    Proj_Launch(iVar4,param_1[3],param_1[5],param_1[6]);
  }
  return iVar4;
}

