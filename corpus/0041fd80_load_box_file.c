
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int load_box_file(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_18 [16];
  int local_8;
  
  iVar2 = param_1;
  iVar4 = Cbin_Open(param_1);
  uVar3 = param_2;
  if (iVar4 == 0) {
    Error_CannotOpenFile(iVar2,s_dlg_LoadBOXFile_00535948);
    return 0;
  }
  Mem_AllocZeroTagged(&param_1,0x140,4,s_Dialog_Box_0053593c,param_2);
  iVar2 = param_1;
  piVar1 = (int *)(param_1 + 0x120);
  Cbin_GetParam(&PTR_DAT_00535938,s_IMAGE_005355d4,local_18,0x10,0,4,1);
  iVar4 = Image_Load(local_18);
  *piVar1 = iVar4;
  if (iVar4 == 0) {
    Cbin_Close();
    return 0;
  }
  mark_alloc_memory_with_flags(iVar4,uVar3);
  Mem_SetTag(*piVar1,s_DLGBOX_PCX_0053592c);
  Image_ToLuminance((byte *)*piVar1,(byte *)&DAT_00602e00,DAT_00603108);
  iVar4 = param_1;
  *(uint *)(iVar2 + 0x138) = _DAT_00603100;
  *(uint *)(iVar2 + 0x13c) = DAT_00603104;
  param_2 = 0x1f;
  if (_DAT_00603100 != 0) {
    for (; _DAT_00603100 >> param_2 == 0; param_2 = param_2 + -1) {
    }
  }
  local_8 = 0x1f;
  if (DAT_00603104 != 0) {
    for (; DAT_00603104 >> local_8 == 0; local_8 = local_8 + -1) {
    }
  }
  *(undefined1 *)(iVar2 + 0x128) = (undefined1)param_2;
  *(undefined1 *)(iVar2 + 0x129) = (undefined1)local_8;
  *(undefined4 *)(iVar2 + 300) = 0x20008;
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_00535924,0,0,param_1,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_00535924,0,0,iVar4 + 4,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_00535924,0,0,iVar4 + 8,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_00535924,0,0,iVar4 + 0xc,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_0053591c,0,0,param_1 + 0x10,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_0053591c,0,0,iVar2 + 0x14,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_0053591c,0,0,iVar2 + 0x18,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_0053591c,0,0,iVar2 + 0x1c,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_00535914,0,0,param_1 + 0x20,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_00535914,0,0,iVar2 + 0x24,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_00535914,0,0,iVar2 + 0x28,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_00535914,0,0,iVar2 + 0x2c,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_0053590c,0,0,param_1 + 0x30,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_0053590c,0,0,iVar2 + 0x34,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_0053590c,0,0,iVar2 + 0x38,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_0053590c,0,0,iVar2 + 0x3c,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,s_TOP_B_00535904,0,0,param_1 + 0x60,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,s_TOP_B_00535904,0,0,iVar2 + 100,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,s_TOP_B_00535904,0,0,iVar2 + 0x68,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,s_TOP_B_00535904,0,0,iVar2 + 0x6c,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,s_BOTTOM_B_005358f8,0,0,param_1 + 0x70,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,s_BOTTOM_B_005358f8,0,0,iVar2 + 0x74,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,s_BOTTOM_B_005358f8,0,0,iVar2 + 0x78,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,s_BOTTOM_B_005358f8,0,0,iVar2 + 0x7c,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,s_LEFT_B_005358f0,0,0,param_1 + 0x40,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,s_LEFT_B_005358f0,0,0,iVar2 + 0x44,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,s_LEFT_B_005358f0,0,0,iVar2 + 0x48,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,s_LEFT_B_005358f0,0,0,iVar2 + 0x4c,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,s_RIGHT_B_005358e8,0,0,param_1 + 0x50,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,s_RIGHT_B_005358e8,0,0,iVar2 + 0x54,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,s_RIGHT_B_005358e8,0,0,iVar2 + 0x58,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,s_RIGHT_B_005358e8,0,0,iVar2 + 0x5c,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,s_BACK_B_005358e0,0,0,param_1 + 0x80,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,s_BACK_B_005358e0,0,0,iVar2 + 0x84,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,s_BACK_B_005358e0,0,0,iVar2 + 0x88,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,s_BACK_B_005358e0,0,0,iVar2 + 0x8c,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358d8,0,0,param_1 + 0x90,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358d8,0,0,iVar2 + 0x94,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358d8,0,0,iVar2 + 0x98,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358d8,0,0,iVar2 + 0x9c,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358d0,0,0,param_1 + 0xa0,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358d0,0,0,iVar2 + 0xa4,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358d0,0,0,iVar2 + 0xa8,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358d0,0,0,iVar2 + 0xac,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358c8,0,0,param_1 + 0xb0,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358c8,0,0,iVar2 + 0xb4,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358c8,0,0,iVar2 + 0xb8,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358c8,0,0,iVar2 + 0xbc,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358c0,0,0,param_1 + 0xc0,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358c0,0,0,iVar2 + 0xc4,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358c0,0,0,iVar2 + 200,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,&DAT_005358c0,0,0,iVar2 + 0xcc,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,s_TOP_H_005358b8,0,0,param_1 + 0xf0,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,s_TOP_H_005358b8,0,0,iVar2 + 0xf4,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,s_TOP_H_005358b8,0,0,iVar2 + 0xf8,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,s_TOP_H_005358b8,0,0,iVar2 + 0xfc,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,s_BOTTOM_H_005358ac,0,0,param_1 + 0x100,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,s_BOTTOM_H_005358ac,0,0,iVar2 + 0x104,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,s_BOTTOM_H_005358ac,0,0,iVar2 + 0x108,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,s_BOTTOM_H_005358ac,0,0,iVar2 + 0x10c,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,s_LEFT_H_005358a4,0,0,param_1 + 0xd0,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,s_LEFT_H_005358a4,0,0,iVar2 + 0xd4,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,s_LEFT_H_005358a4,0,0,iVar2 + 0xd8,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,s_LEFT_H_005358a4,0,0,iVar2 + 0xdc,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,s_RIGHT_H_0053589c,0,0,param_1 + 0xe0,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,s_RIGHT_H_0053589c,0,0,iVar2 + 0xe4,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,s_RIGHT_H_0053589c,0,0,iVar2 + 0xe8,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,s_RIGHT_H_0053589c,0,0,iVar2 + 0xec,1,4);
  iVar2 = param_1;
  Cbin_GetParam(&PTR_DAT_00535938,s_BACK_H_00535894,0,0,param_1 + 0x110,1,1);
  Cbin_GetParam(&PTR_DAT_00535938,s_BACK_H_00535894,0,0,iVar2 + 0x114,1,2);
  Cbin_GetParam(&PTR_DAT_00535938,s_BACK_H_00535894,0,0,iVar2 + 0x118,1,3);
  Cbin_GetParam(&PTR_DAT_00535938,s_BACK_H_00535894,0,0,iVar2 + 0x11c,1,4);
  Cbin_Close();
  return param_1;
}

