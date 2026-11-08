
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* untextured material: flat RGB +0x10 (or palette shade if 0x80) -> texture slot */

void Pak_BindMaterial(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)FUN_004af180();
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 0x28) = 0;
  *(undefined4 *)(puVar1 + 0x44) = DAT_00668f90;
  uVar2 = Tex_FlagsToRenderState(*(ushort *)(param_1 + 0x16) | DAT_00668f60);
  *(undefined4 *)(puVar1 + 0x34) = uVar2;
  uVar3 = Tex_AdjustRenderState(param_1,uVar2);
  *(uint *)(puVar1 + 0x34) = uVar3;
  puVar1[0x4c] = 0;
  if ((*(ushort *)(param_1 + 0x16) & 0x800) != 0 || (DAT_00668f60 & 0x800) != 0) {
    puVar1[0x4c] = 1;
  }
  if ((*(ushort *)(param_1 + 0x16) & 0x1000) == 0 && (DAT_00668f60 & 0x1000) == 0) {
    puVar1[0x4c] = puVar1[0x4c] + '\x01';
  }
  if ((*(ushort *)(param_1 + 0x16) & 0x100) != 0 || (DAT_00668f60 & 0x100) != 0) {
    puVar1[0x4c] = puVar1[0x4c] + '\x01';
  }
  if ((uVar3 & 7) != 0) {
    puVar1[0x4c] = puVar1[0x4c] + '\x01';
  }
  if (5 < (byte)puVar1[0x4c]) {
    puVar1[0x4c] = 5;
  }
  _DAT_00603480 = CONCAT13(DAT_00603480_3,*(undefined3 *)(param_1 + 0x10));
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    _DAT_00603480 = (uint)DAT_00603480_3 << 0x18;
  }
  if ((*(ushort *)(param_1 + 0x16) & 0x80) != 0) {
    *(uint *)(puVar1 + 0x2c) = (uint)(*(byte *)(param_1 + 0x10) >> 3);
    *(undefined1 **)(param_1 + 0x10) = puVar1;
    return;
  }
  uVar2 = FUN_004a2de0();
  *(undefined4 *)(puVar1 + 0x2c) = uVar2;
  *(uint *)(puVar1 + 0x2c) =
       ((_DAT_00603480 & 0xff) << 8 | _DAT_00603480 >> 8 & 0xff) << 8 | _DAT_00603480 >> 0x10 & 0xff
  ;
  *(undefined1 **)(param_1 + 0x10) = puVar1;
  if (DAT_00668f78 != (code *)0x0) {
    (*DAT_00668f78)(0,0,0,*(undefined2 *)(param_1 + 0x16));
  }
  return;
}

