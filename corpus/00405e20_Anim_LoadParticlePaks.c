
void Anim_LoadParticlePaks(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  iVar1 = param_1;
  iVar2 = Cbin_CountEntries(s_PARTICLE_PAKS_0053271c,s_PARTICLE_0053272c);
  *(int *)(param_1 + 0x54) = iVar2;
  if (iVar2 != 0) {
    FUN_0048e3d0((int *)(param_1 + 0x58),iVar2 * 0x2c,4,s_PARTICLE_PAK_BUFFER_00532708,0xcccc);
    iVar2 = Cbin_SelectGroup(s_PARTICLE_PAKS_0053271c);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x58);
      uVar3 = 0;
      if (*(int *)(param_1 + 0x54) != 0) {
        param_1 = iVar2 + 0x20;
        do {
          FUN_0049bdb0(s_PARTICLE_0053272c,iVar2,0x20,0,4,1);
          FUN_0049b930(s_PARTICLE_0053272c,local_10,0x10,0,4,2);
          FUN_0049b930(s_PARTICLE_0053272c,local_20,0x10,0,4,3);
          if (param_2 != 0) {
            ModelPool_Load(param_1,local_10,0,local_20,&g_FxModelPool,0);
          }
          uVar3 = uVar3 + 1;
          param_1 = param_1 + 0x2c;
          iVar2 = iVar2 + 0x2c;
        } while (uVar3 < *(uint *)(iVar1 + 0x54));
      }
    }
  }
  return;
}

