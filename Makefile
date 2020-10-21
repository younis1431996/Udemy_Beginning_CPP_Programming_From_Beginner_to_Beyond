.PHONY: clean All

All:
	@echo "----------Building project:[ Section_7_challenge - Debug ]----------"
	@cd "Section_7_challenge" && "$(MAKE)" -f  "Section_7_challenge.mk"
clean:
	@echo "----------Cleaning project:[ Section_7_challenge - Debug ]----------"
	@cd "Section_7_challenge" && "$(MAKE)" -f  "Section_7_challenge.mk" clean
