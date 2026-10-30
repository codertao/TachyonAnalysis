
/* iterate placement/def section (ptr buf+0x18, count buf+0x14, VARIABLE stride = u16 at rec+2, SPED
   index = u32 at rec+4): for index<declCount call Spx_ConstructPlacement(defRec,
   decl[index].entity) -> spawns entity at def pos */

void Spx_ApplyPlacements(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4;
  iVar1 = *(int *)(param_4 + 0x10);
  *(int *)(param_3 + 0x54) = param_4;
  if (param_2 != 0) {
    param_4 = param_2;
    do {
      if (*(uint *)(param_1 + 4) < *(uint *)(iVar2 + 0xc)) {
        Spx_ConstructPlacement
                  (param_1,*(undefined4 *)(iVar1 + 0x20 + *(uint *)(param_1 + 4) * 0x24),param_3);
      }
      param_1 = param_1 + (uint)*(ushort *)(param_1 + 2);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

