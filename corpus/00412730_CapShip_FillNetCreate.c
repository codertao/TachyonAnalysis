
/* sweep */

void CapShip_FillNetCreate(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_40 [64];
  
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(*(int *)(param_1 + 0xe4) + 0x44);
  if ((*(byte *)(*(int *)(param_1 + 0xd8) + 0x24) & 0x80) == 0) {
    *(undefined2 *)(param_2 + 0x10) = 0xffff;
  }
  else {
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(*(int *)(param_1 + 0xd8) + 0x60);
  }
  if (*(int *)(param_1 + 0xdc) == 0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x78);
  }
  *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(*(int *)(param_1 + 0xd8) + 0x54);
  *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_1 + 0x104);
  if (*(int *)(*(int *)(param_1 + 0xd8) + 100) != -1) {
    Sped_FormatName(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x18),*(int *)(param_1 + 0xd8),
                    param_1 + 0xec,auStack_40);
    SrvSend_EntityLabel(*(undefined4 *)(param_1 + 0x78),auStack_40,g_SrvCurConn);
  }
  if (*(char *)(param_1 + 0x106) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
  }
  iVar1 = CapShip_SerializePartIds(param_1,param_2 + 0x18);
  *param_3 = iVar1 - param_2;
  return;
}

