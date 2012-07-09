#ifndef PINTEXPR_VISITOR_HH_
#define PINTEXPR_VISITOR_HH_

namespace its {

class PIntExprVisitor {
public:
  virtual ~PIntExprVisitor() {}
  
  virtual void visitVarExpr (int) = 0;
  virtual void visitConstExpr (int) = 0;
  virtual void visitWrapBoolExpr (const class PBoolExpression &) = 0;
  virtual void visitArrayVarExpr (int, const class PIntExpression &) = 0;
  virtual void visitArrayConstExpr (int, const class PIntExpression &) = 0;
  virtual void visitNaryIntExpr (IntExprType, const NaryPParamType &) = 0;
  virtual void visitBinaryIntExpr (IntExprType, const class PIntExpression &, const class PIntExpression &) = 0;
};

} // namespace sym

#endif /// ! PINTEXPR_VISITOR_HH_
