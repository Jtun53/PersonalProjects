/**
 * Created by jtungul on 3/11/16.
 * Milestone Goal 1: Read bank transaction info manually by downloading  DONE
 * Milestone Goal 2: Generate CSV file with categories and costs  DONE
 * Milestone Goal 2.5: Generate PieChart based on expenses.  DONE
 * Milestone Goal 3: Automatically Parse downloaded files and generate CSV ALMOST DONE
 * Milestone Goal 4: Automatically retrieve transaction info from bank  NOT SURE IF POSSIBLE
 * New Goal: Allow user to specify which month to download.
 * Whats Next: - Transition code from JavaBank to JavaBank2 with Google Drive functionality
 *             - Delete file after pie chart is generated.
 */

import java.io.IOException;

public class main {
    public static void main(String[] args) throws IOException {
        System.out.println("Hello World");
        DriveApi.getFile();
    };
}
