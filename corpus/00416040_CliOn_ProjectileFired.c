
/* S->C 0x1002 handler */

void CliOn_ProjectileFired(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = (uint)*(ushort *)(param_1 + 0xc) << 0x10;
  uVar1 = *(ushort *)(param_1 + 0x12);
  uVar4 = DAT_005b39cc & 0xffff;
  local_8 = (uint)*(ushort *)(param_1 + 0xe) << 0x10;
  local_4 = (uint)*(ushort *)(param_1 + 0x10) << 0x10;
  iVar3 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar3 = Dcb_FindById(*(int *)(param_1 + 0x18));
  }
  Proj_SpawnRemoteVisual
            (param_1,&local_c,*(undefined1 *)(param_1 + 0x16),uVar4 - uVar1,2,
             *(undefined1 *)(param_1 + 0x17),iVar3);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x8c) != 0)) &&
     (pcVar2 = *(code **)(*(int *)(iVar3 + 0x8c) + 0x80), pcVar2 != (code *)0x0)) {
    (*pcVar2)(iVar3,8,param_1);
  }
  return;
}

