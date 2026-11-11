
/* ASTEROID class +0x1c: placement +0x38 = 16.16 scale (radius = int(scale) * des radius) */

void Asteroid_SpawnAtLoad(int param_1,Desc *param_2,undefined4 param_3)

{
  uint uVar1;
  Quadrant *pQVar2;
  SpED *ent;
  
  ent = (SpED *)FUN_0041b790(&g_PoolRoid,0xb,param_3);
  if (ent != (SpED *)0x0) {
    Quad_LinkStatic(ent);
    ent->desc = param_2;
    *(int *)&ent->field_0xc8 = param_1;
    *(SpED **)(param_1 + 0x28) = ent;
    *(void **)&ent->field_0x58 = param_2[1].m28;
    ent->field_0x7e = *(undefined1 *)&param_2[1].spawnAtLoad;
    uVar1 = *(uint *)(param_1 + 0x38);
    ent->scale = uVar1;
    *(undefined4 *)&ent->field_0x18 = 0x10;
    *(uint *)&ent->field_0xbc = (uVar1 >> 0x10) * (int)param_2[1].onMessage;
    (ent->pos).x = *(int *)(param_1 + 8);
    (ent->pos).y = *(int *)(param_1 + 0xc);
    (ent->pos).z = *(int *)(param_1 + 0x10);
    (ent->ang).x = *(int *)(param_1 + 0x14) << 0x10;
    pQVar2 = ent->quadrant;
    (ent->ang).y = *(int *)(param_1 + 0x18) << 0x10;
    (ent->ang).z = *(int *)(param_1 + 0x1c) << 0x10;
    ent->think = (void *)0x0;
    ent->onCollide = (void *)0x0;
    ent->onDamage = FUN_00407e60;
    ent->netFlags = 7;
    ent->stateFlags = 0;
    ent->target = (SpED *)0x0;
    *(undefined4 *)&ent->field_0xb8 = 0;
    ent->collOverride = (void *)0x0;
    FUN_0045cda0(ent,&pQVar2->staticSectorMap);
  }
  return;
}

