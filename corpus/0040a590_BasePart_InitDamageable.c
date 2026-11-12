
/* sweep */

void BasePart_InitDamageable(SpED *param_1)

{
  SpED *pSVar1;
  
  pSVar1 = param_1[1].next;
  if (((pSVar1->pos).x & 0x6918U) != 0) {
    param_1->onDamage = BasePart_OnDamage;
    if (((pSVar1->pos).x & 0x4000U) != 0) {
      param_1->onDamage = &LAB_0040a400;
    }
    *(void **)&param_1->field_0xbc = pSVar1->preRender;
    Ent_SetEngageLimits(param_1,4,4);
    param_1->stateFlags = param_1->stateFlags | 1;
    Quad_LinkStatic(param_1);
    return;
  }
  param_1->onDamage = &LAB_00460f30;
  Quad_LinkStatic(param_1);
  return;
}

