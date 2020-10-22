.PHONY: clean All

All:
	@echo "----------Building project:[ Section_8_challenge - Debug ]----------"
	@cd "Section_8_challenge" && "$(MAKE)" -f  "Section_8_challenge.mk"
clean:
	@echo "----------Cleaning project:[ Section_8_challenge - Debug ]----------"
	@cd "Section_8_challenge" && "$(MAKE)" -f  "Section_8_challenge.mk" clean
