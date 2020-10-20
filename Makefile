.PHONY: clean All

All:
	@echo "----------Building project:[ Section_6_challenge - Debug ]----------"
	@cd "Section_6_challenge" && "$(MAKE)" -f  "Section_6_challenge.mk"
clean:
	@echo "----------Cleaning project:[ Section_6_challenge - Debug ]----------"
	@cd "Section_6_challenge" && "$(MAKE)" -f  "Section_6_challenge.mk" clean
