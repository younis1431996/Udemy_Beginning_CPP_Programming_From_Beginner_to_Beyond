.PHONY: clean All

All:
	@echo "----------Building project:[ First_Program - Debug ]----------"
	@cd "First_Program" && "$(MAKE)" -f  "First_Program.mk"
clean:
	@echo "----------Cleaning project:[ First_Program - Debug ]----------"
	@cd "First_Program" && "$(MAKE)" -f  "First_Program.mk" clean
